// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTFIELDIMAGEBACKGROUNDPROVIDER_H
#define _UITEXTFIELDIMAGEBACKGROUNDPROVIDER_H

@class UITextFieldViewBackgroundProvider;


#import "_UITextFieldImageBackgroundView.h"

@interface _UITextFieldImageBackgroundProvider : UITextFieldViewBackgroundProvider {
    _UITextFieldImageBackgroundView *_backgroundView;
}




-(id)backgroundView;
-(void)_applyCorrectImage;
-(void)addToTextField:(id)arg0 ;
-(void)enabledDidChangeAnimated:(BOOL)arg0 ;
-(void)layoutIfNeeded;
-(void)setNeedsDisplay;


@end


#endif