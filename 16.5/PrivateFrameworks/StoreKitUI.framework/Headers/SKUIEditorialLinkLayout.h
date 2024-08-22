// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIEDITORIALLINKLAYOUT_H
#define SKUIEDITORIALLINKLAYOUT_H

@class NSString, NSArray;
@protocol SKUICachedLayout;

#import <Foundation/Foundation.h>


@interface SKUIEditorialLinkLayout : NSObject <SKUICachedLayout>

 {
    *CGSize _sizes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *links; // ivar: _links
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGSize totalSize; // ivar: _totalSize


-(id)initWithLayoutRequest:(id)arg0 ;
-(struct CGSize )sizeForLinkAtIndex:(NSInteger)arg0 ;
-(void)dealloc;
-(void)enumerateLinesUsingBlock:(id)arg0 ;


@end


#endif