// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBWEBSITEDATARECORD_H
#define WBWEBSITEDATARECORD_H

@class NSString;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface WBWebsiteDataRecord : NSObject

@property (readonly, copy, nonatomic) NSObject<OS_xpc_object> *XPCDictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) NSUInteger usage; // ivar: _usage


+(id)websiteDataRecordFromXPCDictionary:(id)arg0 ;
+(id)websiteDataRecordWithDomain:(id)arg0 ;
-(id)_initWithDomain:(id)arg0 ;
-(id)_initWithDomain:(id)arg0 usage:(NSUInteger)arg1 ;


@end


#endif