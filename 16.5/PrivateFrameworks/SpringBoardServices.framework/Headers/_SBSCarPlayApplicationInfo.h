// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBSCARPLAYAPPLICATIONINFO_H
#define _SBSCARPLAYAPPLICATIONINFO_H

@class NSString, NSData;
@protocol SBSCarPlayApplicationIcon;

#import <Foundation/Foundation.h>


@interface _SBSCarPlayApplicationInfo : NSObject <SBSCarPlayApplicationIcon>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *iconImageData; // ivar: _iconImageData
@property (nonatomic) CGFloat iconImageScale; // ivar: _iconImageScale
@property (retain, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName
@property (readonly) Class superclass;




@end


#endif