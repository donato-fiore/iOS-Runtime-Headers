// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBOVERRIDESCROLLVIEWCONTENTOFFSETSWITCHERMODIFIER_H
#define SBOVERRIDESCROLLVIEWCONTENTOFFSETSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"

@interface SBOverrideScrollViewContentOffsetSwitcherModifier : SBSwitcherModifier {
    CGPoint _scrollViewContentOffset;
}




-(id)initWithScrollViewContentOffset:(struct CGPoint )arg0 ;
-(struct CGPoint )scrollViewContentOffset;


@end


#endif