// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBPDFVIEW_H
#define WEBPDFVIEW_H

@class WAKView, NSString;
@protocol WebPDFDocumentView, WebPDFDocumentRepresentation;



@interface WebPDFView : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation>

 {
    BOOL dataSourceHasBeenSet;
    *CGPDFDocument _PDFDocument;
    RetainPtr<NSString> _title;
    *CGRect _pageRects;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)_representationClassForWebFrame:(id)arg0 ;
+(id)supportedMIMETypes;
+(struct CGColor *)backgroundColor;
+(struct CGColor *)shadowColor;
-(BOOL)canProvideDocumentSource;
-(id)_pagesInRect:(struct CGRect )arg0 ;
-(id)documentSource;
-(id)title;
-(struct CGPDFDocument *)doc;
-(struct CGRect )rectForPageNumber:(unsigned int)arg0 ;
-(unsigned int)pageNumberForRect:(struct CGRect )arg0 ;
-(unsigned int)totalPages;
-(void)_checkPDFTitle;
-(void)_computePageRects;
-(void)dataSourceUpdated:(id)arg0 ;
-(void)dealloc;
-(void)drawPage:(struct CGPDFPage *)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)finishedLoadingWithDataSource:(id)arg0 ;
-(void)layout;
-(void)receivedData:(id)arg0 withDataSource:(id)arg1 ;
-(void)receivedError:(id)arg0 withDataSource:(id)arg1 ;
-(void)setDataSource:(id)arg0 ;
-(void)setNeedsLayout:(BOOL)arg0 ;
-(void)viewDidMoveToHostWindow;
-(void)viewWillMoveToHostWindow:(id)arg0 ;


@end


#endif