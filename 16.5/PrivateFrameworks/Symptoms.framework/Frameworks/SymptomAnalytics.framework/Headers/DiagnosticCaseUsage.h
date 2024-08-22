// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIAGNOSTICCASEUSAGE_H
#define DIAGNOSTICCASEUSAGE_H

@class NSManagedObject, NSString, NSDate;



@interface DiagnosticCaseUsage : NSManagedObject

@property (nonatomic) int casesAccepted;
@property (nonatomic) int casesSeen;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) CGFloat interarrival_mean;
@property (nonatomic) CGFloat interarrival_var;
@property (retain, nonatomic) NSDate *lastAccepted;
@property (retain, nonatomic) NSDate *lastSeen;
@property (retain, nonatomic) NSString *process;
@property (retain, nonatomic) NSString *subtype;
@property (retain, nonatomic) NSString *type;




@end


#endif