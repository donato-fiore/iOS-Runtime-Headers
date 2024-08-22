// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHMHOMEAREADESCRIPTOR_H
#define WFHMHOMEAREADESCRIPTOR_H

@class NSUUID, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFHMHomeAreaDescriptor : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger areaType; // ivar: _areaType
@property (readonly, nonatomic) NSUUID *homeIdentifier; // ivar: _homeIdentifier
@property (readonly, nonatomic) NSString *homeName; // ivar: _homeName
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithRoom:(id)arg0 inHome:(id)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg0 homeIdentifier:(id)arg1 name:(id)arg2 areaType:(NSUInteger)arg3 homeName:(id)arg4 ;
-(id)initWithZone:(id)arg0 inHome:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif