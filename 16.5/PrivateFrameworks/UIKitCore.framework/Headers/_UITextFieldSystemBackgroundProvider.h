// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTFIELDSYSTEMBACKGROUNDPROVIDER_H
#define _UITEXTFIELDSYSTEMBACKGROUNDPROVIDER_H

@class UITextFieldViewBackgroundProvider;


#import "UITextFieldBackgroundView.h"

@interface _UITextFieldSystemBackgroundProvider : UITextFieldViewBackgroundProvider {
    UITextFieldBackgroundView *_systemBackgroundView;
}




+(id)systemStyleMetricsProvider;
-(Class)systemBackgroundViewClass;
-(NSInteger)associatedBorderStyle;
-(id)backgroundView;
-(id)overridingGetBackgroundColor;
-(id)overridingSetBackgroundColor:(id)arg0 ;
-(id)preferredMetricsProvider;
-(void)_buildDescription:(id)arg0 ;
-(void)addToTextField:(id)arg0 ;
-(void)enabledDidChangeAnimated:(BOOL)arg0 ;
-(void)removeFromTextField;
-(void)setProgress:(CGFloat)arg0 ;


@end


#endif