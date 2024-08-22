// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCKRECORDFIELDSCHEMA_H
#define SCKRECORDFIELDSCHEMA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SCKRecordFieldSchema : NSObject

@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted; // ivar: _encrypted
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic, getter=isRequired) BOOL required; // ivar: _required
@property (retain, nonatomic) Class valueClass; // ivar: _valueClass


-(BOOL)isValidRecord:(id)arg0 ;
-(id)initWithName:(id)arg0 valueClass:(Class)arg1 required:(BOOL)arg2 encrypted:(BOOL)arg3 ;


@end


#endif