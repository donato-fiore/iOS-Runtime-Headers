// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSITEMOFFERDEVICEERROR_H
#define SSITEMOFFERDEVICEERROR_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface SSItemOfferDeviceError : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _url
@property (readonly, nonatomic) NSString *localizedMessage; // ivar: _localizedMessage
@property (readonly, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) NSString *localizedURLTitle; // ivar: _localizedURLTitle


-(id)_initWithMessage:(id)arg0 title:(id)arg1 URLTitle:(id)arg2 URL:(id)arg3 ;
-(void)dealloc;


@end


#endif