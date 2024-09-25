
# 113-1 臺大電機 計算機程式 作業解答

## 簡介

本專案包含了「113-1 臺大電機 計算機程式（于天立老師, EE1004-02）」的作業解答。這些解答旨在幫助同學理解程式設計的概念及技巧，並提供參考範例。

## 注意事項

**抄襲警告**：本專案的作業解答僅供學習參考之用。老師極度反對同學抄襲作業，抄襲不僅會影響你的學習，也可能會嚴重的影響你的成績。請在使用本專案的內容時，務必理解每一個程式碼片段的意義，並以自己的方式進行撰寫。

## 如何使用

1. 下載此專案：
   ```bash
   git clone https://github.com/yourusername/your-repo-name.git
   ```
2. 進入專案目錄：
   ```bash
   cd EE1004-homework
   ```

## 如何利用 Vim 自動載入模板
請在 `.vimrc` 中加入以下程式，就可以用 `\lt` 來載入模板
```vim
function! LoadHomeworkTemplate()
    " 讀取模板檔案
    let l:template = readfile('template.cpp')
    " 更新當前日期
    let l:date = strftime("%Y-%m-%d")
    " 在模板中替換日期
    call map(l:template, 'substitute(v:val, "\\[DATE\\]", l:date, "")')
    " 插入模板到當前緩衝區
    call append(0, l:template)
    " 進入插入模式
    startinsert
endfunction

" 設定快捷鍵
nnoremap <leader>lt :call LoadHomeworkTemplate()<CR>
```

## TODO: 如何使用 debug.h
   
## 授權

本專案使用 [Creative Commons Attribution-NonCommercial License (CC BY-NC)](https://creativecommons.org/licenses/by-nc/4.0/)。如需進一步了解，請參考 LICENSE.md 檔案。
