// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRCHPATTERNNETWORK_H
#define CRCHPATTERNNETWORK_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CRCHPatternNetwork : NSObject {
    *void _network;
    NSDictionary *_symbols;
    NSDictionary *_startEdges;
    NSDictionary *_startCursorForContentTypes;
}




+(BOOL)isFinalCursor:(id)arg0 inNetwork:(id)arg1 ;
+(id)cursorByAdvancingWithString:(id)arg0 fromCursor:(id)arg1 inNetwork:(id)arg2 ;
+(id)cursorByAdvancingWithSymbol:(id)arg0 fromCursor:(id)arg1 inNetwork:(id)arg2 ;
+(id)kDefaultPatterns;
+(id)kDefaultPatternsPlusUrlsAndEmails;
+(id)kEmailPatterns;
+(id)kUrlPatterns;
+(id)patternToSymbolMap;
+(id)rootCursorForContentType:(int)arg0 inNetwork:(id)arg1 ;
-(id)advanceCursor:(id)arg0 withSymbol:(NSUInteger)arg1 ;
-(id)initWithFile:(id)arg0 ;
-(void)dealloc;


@end


#endif