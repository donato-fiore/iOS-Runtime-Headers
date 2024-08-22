// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLPAGEFRAME_H
#define RWIPROTOCOLPAGEFRAME_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolPageFrame : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *loaderId;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *parentId;
@property (copy, nonatomic) NSString *securityOrigin;
@property (copy, nonatomic) NSString *url;


-(id)initWithIdentifier:(id)arg0 loaderId:(id)arg1 url:(id)arg2 securityOrigin:(id)arg3 mimeType:(id)arg4 ;


@end


#endif