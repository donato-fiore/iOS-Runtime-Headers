// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCCLIENTCONFIGURATION_H
#define SBCCLIENTCONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SBCPlaybackPositionDomain.h"

@interface SBCClientConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) SBCPlaybackPositionDomain *playbackPositionDomain; // ivar: _playbackPositionDomain


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlaybackPositionDomain:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif