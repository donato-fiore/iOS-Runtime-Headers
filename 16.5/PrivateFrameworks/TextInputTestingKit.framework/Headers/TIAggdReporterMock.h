// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIAGGDREPORTERMOCK_H
#define TIAGGDREPORTERMOCK_H

@class NSString, NSMutableDictionary;
@protocol TIAggdReporting;

#import <Foundation/Foundation.h>


@interface TIAggdReporterMock : NSObject <TIAggdReporting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *distributions; // ivar: _distributions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *scalars; // ivar: _scalars
@property (readonly) Class superclass;


-(NSInteger)_getScalar:(id)arg0 ;
-(NSInteger)getScalar:(id)arg0 ;
-(id)getDistributionObject:(id)arg0 ;
-(id)init;
-(id)toDictionary;
-(id)toJsonString;
-(int)commit;
-(void)_setScalar:(id)arg0 withValue:(NSInteger)arg1 ;
-(void)addValue:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)clear;
-(void)clearDistributionKey:(id)arg0 ;
-(void)clearScalarKey:(id)arg0 ;
-(void)decrementKey:(id)arg0 ;
-(void)incrementKey:(id)arg0 ;
-(void)pushValue:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)setScalar:(id)arg0 withValue:(NSInteger)arg1 ;
-(void)setValue:(CGFloat)arg0 forDistributionKey:(id)arg1 ;
-(void)setValue:(NSInteger)arg0 forScalarKey:(id)arg1 ;
-(void)significantTimeChanged;
-(void)subtractValue:(NSInteger)arg0 forKey:(id)arg1 ;


@end


#endif