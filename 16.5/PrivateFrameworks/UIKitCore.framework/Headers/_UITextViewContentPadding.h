// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTVIEWCONTENTPADDING_H
#define _UITEXTVIEWCONTENTPADDING_H

@protocol _UITextViewContentPaddingDelegate;

#import <Foundation/Foundation.h>


@interface _UITextViewContentPadding : NSObject

@property (readonly, nonatomic) CGFloat currentValue; // ivar: _currentValue
@property (weak, nonatomic) NSObject<_UITextViewContentPaddingDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic) CGFloat targetValue; // ivar: _targetValue


-(id)initWithDelegate:(id)arg0 ;
-(void)_checkNewCurrentValue;
-(void)increaseToValue:(CGFloat)arg0 ;


@end


#endif