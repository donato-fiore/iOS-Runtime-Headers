// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTFIELDLINEBACKGROUNDPROVIDER_H
#define _UITEXTFIELDLINEBACKGROUNDPROVIDER_H

@class UITextFieldDrawingBackgroundProvider;



@interface _UITextFieldLineBackgroundProvider : UITextFieldDrawingBackgroundProvider



+(id)lineStyleMetricsProvider;
-(NSInteger)associatedBorderStyle;
-(id)preferredMetricsProvider;
-(void)drawInBounds:(struct CGRect )arg0 ;
-(void)enabledDidChangeAnimated:(BOOL)arg0 ;


@end


#endif