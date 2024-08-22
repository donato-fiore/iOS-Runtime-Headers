// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STMUTABLEACTIVITYATTRIBUTIONLIST_H
#define STMUTABLEACTIVITYATTRIBUTIONLIST_H

@class NSArray, NSString;
@protocol STMutableStatusDomainData, STMutableStatusDomainDataDifferencing;


#import "STActivityAttributionList.h"
#import "STMutableListData.h"

@interface STMutableActivityAttributionList : STActivityAttributionList <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>



@property (copy, nonatomic) NSArray *attributions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) STMutableListData *listData;
@property (readonly) Class superclass;


-(BOOL)applyDiff:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithListData:(id)arg0 ;
-(void)addAttribution:(id)arg0 ;
-(void)removeAllOccurrencesOfAttribution:(id)arg0 ;
-(void)removeAttribution:(id)arg0 ;


@end


#endif