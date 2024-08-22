// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBPDFVIEWPLACEHOLDER_H
#define WEBPDFVIEWPLACEHOLDER_H

@class WAKView, NSString, NSArray;
@protocol WebPDFDocumentView, WebPDFDocumentRepresentation, WebPDFViewPlaceholderDelegate;


#import "WebDataSource.h"

@interface WebPDFViewPlaceholder : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation>

 {
    WebDataSource *_dataSource;
    BOOL _didFinishLoad;
}


@property CGSize containerSize; // ivar: _containerSize
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<WebPDFViewPlaceholderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didCompleteLayout; // ivar: _didCompleteLayout
@property (readonly) *CGPDFDocument doc;
@property (readonly) *CGPDFDocument document; // ivar: _document
@property (readonly) NSUInteger hash;
@property (retain) NSArray *pageRects; // ivar: _pageRects
@property (retain) NSArray *pageYOrigins; // ivar: _pageYOrigins
@property (readonly) Class superclass;
@property (retain) NSString *title; // ivar: _title
@property (readonly) NSUInteger totalPages;


+(Class)_representationClassForWebFrame:(id)arg0 ;
+(id)supportedMIMETypes;
+(void)setAsPDFDocRepAndView;
-(BOOL)canProvideDocumentSource;
-(struct CGRect )_getPDFPageBounds:(struct CGPDFPage *)arg0 ;
-(struct CGRect )rectForPageNumber:(NSUInteger)arg0 ;
-(struct CGSize )_computePageRects:(struct CGPDFDocument *)arg0 ;
-(void)_doPostLoadOrUnlockTasks;
-(void)_evaluateJSForDocument:(struct CGPDFDocument *)arg0 ;
-(void)_notifyDidCompleteLayout;
-(void)_updateTitleForDocumentIfAvailable;
-(void)_updateTitleForURL:(id)arg0 ;
-(void)clearDocument;
-(void)dataSourceUpdated:(id)arg0 ;
-(void)dealloc;
-(void)didUnlockDocument;
-(void)finishedLoadingWithDataSource:(id)arg0 ;
-(void)layout;
-(void)receivedData:(id)arg0 withDataSource:(id)arg1 ;
-(void)receivedError:(id)arg0 withDataSource:(id)arg1 ;
-(void)setDataSource:(id)arg0 ;
-(void)simulateClickOnLinkToURL:(id)arg0 ;
-(void)viewDidMoveToHostWindow;
-(void)viewWillMoveToHostWindow:(id)arg0 ;


@end


#endif