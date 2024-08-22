// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLESHORTCUTFUZZYMATCHRESPONSE_SHORTCUTSCOREPAIR_H
#define FTMUTABLESHORTCUTFUZZYMATCHRESPONSE_SHORTCUTSCOREPAIR_H

@class ShortcutScorePair, NSString;



@interface FTMutableShortcutFuzzyMatchResponse_ShortcutScorePair : ShortcutScorePair

@property (copy, nonatomic) NSString *shortcut;
@property (nonatomic) CGFloat similarity_score;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif