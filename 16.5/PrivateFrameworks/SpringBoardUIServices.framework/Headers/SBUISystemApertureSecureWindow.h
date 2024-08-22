// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUISYSTEMAPERTURESECUREWINDOW_H
#define SBUISYSTEMAPERTURESECUREWINDOW_H

@class UIWindow;



@interface SBUISystemApertureSecureWindow : UIWindow



+(BOOL)_isSecure;
-(BOOL)_accessibilityInvertColorsIsDarkWindow;
-(BOOL)accessibilityIgnoresInvertColors;
-(void)accessibilityApplyInvertFilter;


@end


#endif