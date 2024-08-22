// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISPACEPAGESECTION_H
#define SKUISPACEPAGESECTION_H



#import "SKUIStorePageSection.h"
#import "SKUISpacePageComponent.h"

@interface SKUISpacePageSection : SKUIStorePageSection

@property (readonly, nonatomic) SKUISpacePageComponent *pageComponent;


-(NSInteger)numberOfCells;
-(id)cellForIndexPath:(id)arg0 ;
-(id)initWithPageComponent:(id)arg0 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(void)willAppearInContext:(id)arg0 ;


@end


#endif