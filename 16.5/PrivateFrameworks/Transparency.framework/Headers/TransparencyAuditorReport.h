// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRANSPARENCYAUDITORREPORT_H
#define TRANSPARENCYAUDITORREPORT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TransparencyAuditorReport : NSObject

@property NSInteger auditorId; // ivar: _auditorId
@property (readonly) NSString *auditorName;


-(id)initWithAuditorId:(NSInteger)arg0 ;
-(void)getReportForUUID:(id)arg0 completionBlock:(id)arg1 ;
-(void)getReportsForUUIDs:(id)arg0 completionBlock:(id)arg1 ;
-(void)makeReport:(id)arg0 additionalData:(id)arg1 completionBlock:(id)arg2 ;
-(void)makeReports:(id)arg0 additionalData:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif