// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _RWIDRIVERINTERFACEINFO_H
#define _RWIDRIVERINTERFACEINFO_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>

#import "RWIDriverConfiguration.h"
#import "RWIDriverState.h"
#import "_RWIRelayClientConnection.h"

@interface _RWIDriverInterfaceInfo : NSObject {
    RWIDriverConfiguration *_configuration;
    RWIDriverState *_state;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) _RWIRelayClientConnection *connection; // ivar: _connection
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSSet *sessionIdentifiers; // ivar: _sessionIdentifiers
@property (readonly, copy, nonatomic) NSString *version;


-(id)dictionaryRepresentation;
-(id)initWithConfiguration:(id)arg0 connection:(id)arg1 ;
-(void)updateDriverState:(id)arg0 ;


@end


#endif