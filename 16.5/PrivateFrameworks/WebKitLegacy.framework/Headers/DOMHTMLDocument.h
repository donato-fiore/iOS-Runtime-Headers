// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOMHTMLDOCUMENT_H
#define DOMHTMLDOCUMENT_H

@class NSString;


#import "DOMDocument.h"
#import "DOMHTMLCollection.h"

@interface DOMHTMLDocument : DOMDocument

@property (copy) NSString *alinkColor;
@property (copy) NSString *bgColor;
@property (readonly, copy) NSString *compatMode;
@property (copy) NSString *designMode;
@property (copy) NSString *dir;
@property (readonly) DOMHTMLCollection *embeds;
@property (copy) NSString *fgColor;
@property (readonly) int height;
@property (copy) NSString *linkColor;
@property (readonly) DOMHTMLCollection *plugins;
@property (readonly) DOMHTMLCollection *scripts;
@property (copy) NSString *vlinkColor;
@property (readonly) int width;


-(id)_createDocumentFragmentWithMarkupString:(id)arg0 baseURLString:(id)arg1 ;
-(id)_createDocumentFragmentWithText:(id)arg0 ;
-(id)createDocumentFragmentWithMarkupString:(id)arg0 baseURL:(id)arg1 ;
-(id)createDocumentFragmentWithText:(id)arg0 ;
-(void)captureEvents;
-(void)clear;
-(void)close;
-(void)open;
-(void)releaseEvents;
-(void)write:(id)arg0 ;
-(void)writeln:(id)arg0 ;


@end


#endif