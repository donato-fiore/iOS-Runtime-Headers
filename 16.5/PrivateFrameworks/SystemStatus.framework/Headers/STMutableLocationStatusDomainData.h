// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STMUTABLELOCATIONSTATUSDOMAINDATA_H
#define STMUTABLELOCATIONSTATUSDOMAINDATA_H

@class NSArray, NSString;
@protocol STMutableStatusDomainDataDifferencing, STMutableStatusDomainData;


#import "STLocationStatusDomainData.h"
#import "STMutableListData.h"

@interface STMutableLocationStatusDomainData : STLocationStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>



@property (nonatomic) NSUInteger activeDisplayModes;
@property (copy, nonatomic) NSArray *attributions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) STMutableListData *locationAttributionListData;
@property (copy, nonatomic) NSArray *locationAttributions;
@property (readonly) Class superclass;


-(BOOL)applyDiff:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLocationAttributionListData:(id)arg0 activeDisplayModes:(NSUInteger)arg1 ;
-(void)addAttribution:(id)arg0 ;
-(void)addLocationAttribution:(id)arg0 ;
-(void)removeAttribution:(id)arg0 ;
-(void)removeLocationAttribution:(id)arg0 ;


@end


#endif