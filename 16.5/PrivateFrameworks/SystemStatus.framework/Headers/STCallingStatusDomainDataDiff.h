// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STCALLINGSTATUSDOMAINDATADIFF_H
#define STCALLINGSTATUSDOMAINDATADIFF_H

@class NSString;
@protocol STStatusDomainDataDiff;

#import <Foundation/Foundation.h>

#import "STListDataDiff.h"

@interface STCallingStatusDomainDataDiff : NSObject <STStatusDomainDataDiff>

 {
    STListDataDiff *_callDescriptorListDataDiff;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)diffFromData:(id)arg0 toData:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)dataByApplyingToData:(id)arg0 ;
-(id)diffByApplyingDiff:(id)arg0 ;
-(id)init;
-(id)initWithCallDescriptorListDataDiff:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)applyToMutableData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif