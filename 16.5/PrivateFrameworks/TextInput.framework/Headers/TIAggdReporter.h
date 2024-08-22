// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIAGGDREPORTER_H
#define TIAGGDREPORTER_H

@class NSString;
@protocol TIAggdReporting;

#import <Foundation/Foundation.h>


@interface TIAggdReporter : NSObject <TIAggdReporting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)getDefaultSoftwareLayout;
+(id)sharedAggdReporter;
+(id)singletonInstance;
+(void)setSharedAggdReporter:(id)arg0 ;
-(int)commit;
-(void)addValue:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)clearDistributionKey:(id)arg0 ;
-(void)clearScalarKey:(id)arg0 ;
-(void)decrementKey:(id)arg0 ;
-(void)incrementKey:(id)arg0 ;
-(void)pushValue:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)setValue:(CGFloat)arg0 forDistributionKey:(id)arg1 ;
-(void)setValue:(NSInteger)arg0 forScalarKey:(id)arg1 ;
-(void)significantTimeChanged;
-(void)subtractValue:(NSInteger)arg0 forKey:(id)arg1 ;


@end


#endif