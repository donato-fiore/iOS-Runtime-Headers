// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMLPROTOCOLDESCRIPTOR_H
#define TMLPROTOCOLDESCRIPTOR_H

@class NSSet, Protocol, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface TMLProtocolDescriptor : NSObject

@property (readonly, nonatomic) NSSet *implementsProtocols; // ivar: _implementsProtocols
@property (readonly, nonatomic) Protocol *objcProtocol; // ivar: _objcProtocol
@property (copy, nonatomic) NSString *objcProtocolName; // ivar: _objcProtocolName
@property (readonly, nonatomic) NSString *protocolName; // ivar: _protocolName
@property (readonly, nonatomic) NSDictionary *signals; // ivar: _signals


+(id)decode:(struct ProtobufCMessage *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithName:(id)arg0 implementsProtocols:(id)arg1 ;
-(void)addSignal:(id)arg0 ;
-(void)encode:(struct ProtobufCMessage *)arg0 ;


@end


#endif