// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPCONTENTVIEWLAYOUTSIZEPREFERENCES_H
#define SBPIPCONTENTVIEWLAYOUTSIZEPREFERENCES_H


#import <Foundation/Foundation.h>


@interface SBPIPContentViewLayoutSizePreferences : NSObject

@property (nonatomic) CGFloat longSideDefaultSize; // ivar: _longSideDefaultSize
@property (nonatomic) CGFloat longSideMaximumSize; // ivar: _longSideMaximumSize
@property (nonatomic) CGFloat longSideMinimumSize; // ivar: _longSideMinimumSize
@property (nonatomic) CGFloat shortSideMinimumSize; // ivar: _shortSideMinimumSize


-(id)initWithLongSideMinimumSize:(CGFloat)arg0 longSideDefaultSize:(CGFloat)arg1 longSideMaximumSize:(CGFloat)arg2 shortSideMinimumSize:(CGFloat)arg3 ;


@end


#endif