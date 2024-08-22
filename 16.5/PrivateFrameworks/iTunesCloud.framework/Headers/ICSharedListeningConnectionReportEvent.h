// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSHAREDLISTENINGCONNECTIONREPORTEVENT_H
#define ICSHAREDLISTENINGCONNECTIONREPORTEVENT_H

@class NSDate, NSError, NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface ICSharedListeningConnectionReportEvent : NSObject

@property (readonly, nonatomic) CGFloat duration;
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) NSMutableArray *subEvents; // ivar: _subEvents


-(id)initWithName:(id)arg0 ;
-(void)addSubEvent:(id)arg0 ;


@end


#endif