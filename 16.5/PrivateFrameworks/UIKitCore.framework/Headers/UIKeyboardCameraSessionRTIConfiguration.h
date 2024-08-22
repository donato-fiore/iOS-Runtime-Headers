// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDCAMERASESSIONRTICONFIGURATION_H
#define UIKEYBOARDCAMERASESSIONRTICONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UIKeyboardCameraSessionRTIConfiguration : NSObject <NSSecureCoding>



@property (nonatomic) BOOL isSingleLineDocument; // ivar: _isSingleLineDocument
@property (nonatomic) BOOL isWebKitInteractionView; // ivar: _isWebKitInteractionView
@property (nonatomic) BOOL shouldSuppressKeyboard; // ivar: _shouldSuppressKeyboard


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif