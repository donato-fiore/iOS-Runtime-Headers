// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSHTMLREADER_H
#define NSHTMLREADER_H

@class NSMutableAttributedString, NSMutableDictionary, NSData, NSURL, NSDictionary, WebView, DOMDocument, DOMRange, NSMutableArray, WebDataSource, NSString;

#import <Foundation/Foundation.h>


@interface NSHTMLReader : NSObject {
    NSMutableAttributedString *_attrStr;
    NSMutableDictionary *_documentAttrs;
    NSData *_data;
    NSURL *_baseURL;
    NSDictionary *_options;
    WebView *_webView;
    id *_webDelegate;
    DOMDocument *_document;
    DOMRange *_domRange;
    NSMutableArray *_domStartAncestors;
    WebDataSource *_dataSource;
    NSString *_standardFontFamily;
    CGFloat _textSizeMultiplier;
    CGFloat _webViewTextSizeMultiplier;
    CGFloat _defaultTabInterval;
    CGFloat _defaultFontSize;
    CGFloat _minimumFontSize;
    NSMutableArray *_textLists;
    NSMutableArray *_textBlocks;
    NSMutableArray *_textTables;
    NSMutableDictionary *_textTableFooters;
    NSMutableArray *_textTableSpacings;
    NSMutableArray *_textTablePaddings;
    NSMutableArray *_textTableRows;
    NSMutableArray *_textTableRowArrays;
    NSMutableArray *_textTableRowBackgroundColors;
    NSMutableDictionary *_computedStylesForElements;
    NSMutableDictionary *_specifiedStylesForElements;
    NSMutableDictionary *_stringsForNodes;
    NSMutableDictionary *_floatsForNodes;
    NSMutableDictionary *_colorsForNodes;
    NSMutableDictionary *_attributesForElements;
    NSMutableDictionary *_elementIsBlockLevel;
    NSMutableDictionary *_fontCache;
    NSMutableArray *_writingDirectionArray;
    NSInteger _domRangeStartIndex;
    NSInteger _indexingLimit;
    NSInteger _thumbnailLimit;
    NSInteger _errorCode;
    NSInteger _quoteLevel;
    ? _flags;
}




+(BOOL)_usesLibXML2ForOptions:(id)arg0 ;
+(BOOL)allowsAttributedStringAgentForOptions:(id)arg0 ;
+(id)defaultParagraphStyle;
+(void)initialize;
-(BOOL)_addAttachmentForElement:(id)arg0 URL:(id)arg1 needsParagraph:(BOOL)arg2 usePlaceholder:(BOOL)arg3 ;
-(BOOL)_elementHasOwnBackgroundColor:(id)arg0 ;
-(BOOL)_elementIsBlockLevel:(id)arg0 ;
-(BOOL)_enterElement:(id)arg0 tag:(id)arg1 display:(id)arg2 depth:(NSInteger)arg3 embedded:(BOOL)arg4 ;
-(BOOL)_getComputedFloat:(*CGFloat)arg0 forNode:(id)arg1 property:(id)arg2 ;
-(BOOL)_getFloat:(*CGFloat)arg0 forNode:(id)arg1 property:(id)arg2 ;
-(BOOL)_processElement:(id)arg0 tag:(id)arg1 display:(id)arg2 depth:(NSInteger)arg3 ;
-(BOOL)_sanitizeWebArchiveArray:(id)arg0 ;
-(BOOL)_sanitizeWebArchiveDictionary:(id)arg0 ;
-(Class)_DOMHTMLTableCellElementClass;
-(Class)_webArchiveClass;
-(Class)_webViewClass;
-(id)_attributesForElement:(id)arg0 ;
-(id)_blockLevelElementForNode:(id)arg0 ;
-(id)_childrenForNode:(id)arg0 ;
-(id)_colorForNode:(id)arg0 property:(id)arg1 ;
-(id)_computedAttributesForElement:(id)arg0 ;
-(id)_computedColorForNode:(id)arg0 property:(id)arg1 ;
-(id)_computedStringForNode:(id)arg0 property:(id)arg1 ;
-(id)_computedStyleForElement:(id)arg0 ;
-(id)_createWebArchiveForData:(id)arg0 ;
-(id)_specifiedStyleForElement:(id)arg0 ;
-(id)_stringForNode:(id)arg0 property:(id)arg1 ;
-(id)_webPreferences;
-(id)attributedString;
-(id)documentAttributes;
-(id)initWithDOMRange:(id)arg0 ;
-(id)initWithData:(id)arg0 options:(id)arg1 ;
-(id)initWithPath:(id)arg0 options:(id)arg1 ;
-(void)_addMarkersToList:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)_addQuoteForElement:(id)arg0 opening:(BOOL)arg1 level:(NSInteger)arg2 ;
-(void)_addTableCellForElement:(id)arg0 ;
-(void)_addTableForElement:(id)arg0 ;
-(void)_addValue:(id)arg0 forElement:(id)arg1 ;
-(void)_adjustTrailingNewline;
-(void)_exitElement:(id)arg0 tag:(id)arg1 display:(id)arg2 depth:(NSInteger)arg3 startIndex:(NSUInteger)arg4 ;
-(void)_fillInBlock:(id)arg0 forElement:(id)arg1 backgroundColor:(id)arg2 extraMargin:(CGFloat)arg3 extraPadding:(CGFloat)arg4 isTable:(BOOL)arg5 ;
-(void)_load;
-(void)_loadFromDOMRange;
-(void)_loadUsingWebKit;
-(void)_loadUsingWebKitOnMainThread;
-(void)_newLineForElement:(id)arg0 ;
-(void)_newParagraphForElement:(id)arg0 tag:(id)arg1 allowEmpty:(BOOL)arg2 suppressTrailingSpace:(BOOL)arg3 isEntering:(BOOL)arg4 ;
-(void)_newTabForElement:(id)arg0 ;
-(void)_parseNode:(id)arg0 ;
-(void)_processHeadElement:(id)arg0 ;
-(void)_processMetaElementWithName:(id)arg0 content:(id)arg1 ;
-(void)_processText:(id)arg0 ;
-(void)_traverseFooterNode:(id)arg0 depth:(NSInteger)arg1 ;
-(void)_traverseNode:(id)arg0 depth:(NSInteger)arg1 embedded:(BOOL)arg2 ;
-(void)dealloc;
-(void)setMutableAttributedString:(id)arg0 ;


@end


#endif