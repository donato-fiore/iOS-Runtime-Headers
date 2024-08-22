// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSHTMLWRITER_H
#define NSHTMLWRITER_H

@class NSAttributedString, NSDictionary, NSData, NSMutableString, NSFileWrapper, NSMutableDictionary, NSMutableArray, NSMutableIndexSet, NSMutableOrderedSet, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface NSHTMLWriter : NSObject {
    NSAttributedString *_attrStr;
    NSDictionary *_documentAttrs;
    NSData *_htmlData;
    NSMutableString *_bodyStr;
    NSFileWrapper *_fileWrapper;
    NSMutableDictionary *_subresources;
    NSData *_webArchiveData;
    NSMutableArray *_paraStyleStrings;
    NSMutableArray *_paraStyleArrays;
    NSMutableIndexSet *_paraStyleIndexes;
    NSMutableIndexSet *_listItemStyleIndexes;
    NSMutableOrderedSet *_charStyleStrings;
    NSMutableArray *_charStyleArrays;
    NSMutableArray *_fontStrings;
    NSMutableArray *_tableStyleStrings;
    NSMutableArray *_tableCellStyleStrings;
    NSMutableArray *_blockStyleStrings;
    NSMutableArray *_olistStyleStrings;
    NSMutableArray *_ulistStyleStrings;
    NSMutableDictionary *_fontNames;
    NSMutableDictionary *_fontDescriptions;
    NSInteger _level;
    NSInteger _prefixSpaces;
    NSString *_textEncodingName;
    NSUInteger _characterEncoding;
    NSURL *_outputBaseURL;
    id *_resourceHandler;
    unsigned int _excludedElements1;
    unsigned int _excludedElements2;
    ? _flags;
}




+(id)fontNameForFont:(id)arg0 ;
-(BOOL)_closeBlocksForParagraphStyle:(id)arg0 atIndex:(NSUInteger)arg1 inString:(id)arg2 ;
-(BOOL)_closeListsForParagraphStyle:(id)arg0 atIndex:(NSUInteger)arg1 inString:(id)arg2 ;
-(BOOL)_isStrictByParsingExcludedElements;
-(Class)_webArchiveClass;
-(NSUInteger)_blockClassForBlock:(id)arg0 ;
-(NSUInteger)_listClassForList:(id)arg0 ;
-(NSUInteger)_paragraphClassforParagraphStyle:(id)arg0 range:(struct _NSRange )arg1 isEmpty:(BOOL)arg2 isCompletelyEmpty:(BOOL)arg3 headerString:(*id)arg4 alignmentString:(*id)arg5 directionString:(*id)arg6 ;
-(NSUInteger)_spanClassForAttributes:(id)arg0 inParagraphClass:(NSUInteger)arg1 spanClass:(NSUInteger)arg2 flags:(*NSUInteger)arg3 ;
-(id)HTMLData;
-(id)HTMLFileWrapper;
-(id)_defaultValueForAttribute:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)_prefix;
-(id)_prefixDown;
-(id)_prefixUp;
-(id)documentFragmentForDocument:(id)arg0 ;
-(id)documentFragmentString;
-(id)initWithAttributedString:(id)arg0 ;
-(id)subresources;
-(id)webArchive;
-(id)webArchiveData;
-(void)_appendAttachment:(id)arg0 atIndex:(NSUInteger)arg1 toString:(id)arg2 ;
-(void)_closeFlags:(NSUInteger)arg0 openFlags:(NSUInteger)arg1 inString:(id)arg2 ;
-(void)_createWebArchiveData;
-(void)_generateHTML;
-(void)_openBlocksForParagraphStyle:(id)arg0 atIndex:(NSUInteger)arg1 inString:(id)arg2 ;
-(void)_openListsForParagraphStyle:(id)arg0 atIndex:(NSUInteger)arg1 inString:(id)arg2 isStrict:(BOOL)arg3 ;
-(void)_prepareString:(id)arg0 forConversionToEncoding:(NSUInteger)arg1 ;
-(void)_writeDocumentPropertiesToString:(id)arg0 ;
-(void)_writeDocumentProperty:(id)arg0 value:(id)arg1 toString:(id)arg2 ;
-(void)dealloc;
-(void)readDocumentFragment:(id)arg0 ;
-(void)setDocumentAttributes:(id)arg0 ;


@end


#endif