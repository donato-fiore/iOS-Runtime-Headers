// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWQUARANTINE_H
#define WFWORKFLOWQUARANTINE_H

@class NSDate, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WFWorkflowQuarantine : NSObject <NSCopying>



@property (readonly, nonatomic) NSDate *importDate; // ivar: _importDate
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifier; // ivar: _sourceAppIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSerializedData:(id)arg0 ;
-(id)initWithSourceAppIdentifier:(id)arg0 importDate:(id)arg1 ;
-(id)serializedData;
-(id)serializedRepresentation;


@end


#endif