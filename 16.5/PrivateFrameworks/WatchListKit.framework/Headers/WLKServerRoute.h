// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKSERVERROUTE_H
#define WLKSERVERROUTE_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface WLKServerRoute : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *host; // ivar: _host
@property (readonly, copy, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) NSString *requiredKVPType; // ivar: _requiredKVPType
@property (readonly, nonatomic) BOOL requiresLocation; // ivar: _requiresLocation
@property (readonly, copy, nonatomic) NSString *routeName; // ivar: _routeName


-(id)initWithDictionary:(id)arg0 routeName:(id)arg1 ;


@end


#endif