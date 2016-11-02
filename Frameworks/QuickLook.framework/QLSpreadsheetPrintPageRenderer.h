/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLSpreadsheetPrintPageRenderer : QLWebViewPrintPageHelper <WebFrameLoadDelegate> {
    unsigned long long  _currentPageIndex;
    unsigned long long  _currentURLIndex;
    bool  _frameLoaded;
    long long  _numberOfPages;
    UIWebPaginationInfo * _paginationInfo;
    UIWebBrowserView * _printView;
    bool  _printingDone;
    long long  _totalPagesPrinted;
    NSMutableArray * _urls;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_documentURLs;
- (bool)_loadNextURL;
- (bool)_loadURLAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;
- (long long)numberOfPages;
- (id)pdfDataForPageAtIndex:(long long)arg1;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;

@end
