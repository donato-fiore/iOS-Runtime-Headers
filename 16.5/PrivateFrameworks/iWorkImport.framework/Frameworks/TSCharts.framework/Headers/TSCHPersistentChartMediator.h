// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHPERSISTENTCHARTMEDIATOR_H
#define TSCHPERSISTENTCHARTMEDIATOR_H

@class TSPObject, NSString;
@protocol TSCHNotifyOnModify, TSCHMediatorProvider;


#import "TSCHChartMediator.h"

@interface TSCHPersistentChartMediator : TSPObject <TSCHNotifyOnModify, TSCHMediatorProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) TSCHChartMediator *mediator; // ivar: _mediator
@property (readonly) Class superclass;


-(id)initWithContext:(id)arg0 andMediator:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 ;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif