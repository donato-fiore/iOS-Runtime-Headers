// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef W5DEBUGCONFIGURATION_H
#define W5DEBUGCONFIGURATION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface W5DebugConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger bluetooth; // ivar: _bluetooth
@property (nonatomic) NSInteger eapol; // ivar: _eapol
@property (nonatomic) NSInteger megaWiFiProfile; // ivar: _megaWiFiProfile
@property (nonatomic) NSInteger noLoggingWiFiProfile; // ivar: _noLoggingWiFiProfile
@property (nonatomic) NSInteger wifi; // ivar: _wifi


+(BOOL)supportsSecureCoding;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDebugConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif