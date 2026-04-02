# -*- coding: gbk -*-
import time
from typing import List
import requests
from bs4 import BeautifulSoup

BASE_URL = "https://quotes.toscrape.com"  # 演示用公开示例站点
HEADERS = {
    "User-Agent": "ExampleSpider/1.0 (+https://example.com/spider-info)",
    "Accept-Language": "en-US,en;q=0.9",
}
TIMEOUT = 10  # seconds
SLEEP_BETWEEN_REQUESTS = 1.0  # polite delay


def fetch_page(url: str) -> str:
    """GET 请求页面并返回文本内容，带超时和简单的错误处理。"""
    resp = requests.get(url, headers=HEADERS, timeout=TIMEOUT)
    resp.raise_for_status()
    return resp.text


def parse_quotes(html: str) -> List[str]:
    """解析名言文本列表。"""
    soup = BeautifulSoup(html, "html.parser")
    quotes = [q.get_text(strip=True) for q in soup.select(".quote .text")]
    return quotes


def main():
    all_quotes: List[str] = []
    next_page = "/page/1/"

    while next_page:
        url = BASE_URL + next_page
        print(f"Fetching {url}")
        html = fetch_page(url)
        quotes = parse_quotes(html)
        all_quotes.extend(quotes)
        time.sleep(SLEEP_BETWEEN_REQUESTS)

        # 找下一页链接
        soup = BeautifulSoup(html, "html.parser")
        next_link = soup.select_one("li.next > a")
        next_page = next_link["href"] if next_link else None

    print("\nCollected quotes:")
    for i, q in enumerate(all_quotes, 1):
        print(f"{i:02d}: {q}")


if __name__ == "__main__":
    main()      