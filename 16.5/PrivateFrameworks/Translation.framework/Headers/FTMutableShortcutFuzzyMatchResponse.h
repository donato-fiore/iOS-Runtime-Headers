// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLESHORTCUTFUZZYMATCHRESPONSE_H
#define FTMUTABLESHORTCUTFUZZYMATCHRESPONSE_H

@class NSArray, NSString;


#import "FTShortcutFuzzyMatchResponse.h"

@interface FTMutableShortcutFuzzyMatchResponse : FTShortcutFuzzyMatchResponse

@property (nonatomic) int return_code;
@property (copy, nonatomic) NSArray *shortcut_score_pairs;
@property (copy, nonatomic) NSString *utterance;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif