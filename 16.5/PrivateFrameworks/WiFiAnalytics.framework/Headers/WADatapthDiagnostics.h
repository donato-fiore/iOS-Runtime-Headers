// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WADATAPTHDIAGNOSTICS_H
#define WADATAPTHDIAGNOSTICS_H

@class PBCodable;

#import <Foundation/Foundation.h>


@interface WADatapthDiagnostics : NSObject

@property (readonly, nonatomic) int action; // ivar: _action
@property (nonatomic) unsigned int awdMetricID; // ivar: _awdMetricID
@property (retain, nonatomic) PBCodable *awdReport; // ivar: _awdReport


-(id)initWithWADatapthDiagnosticsReport:(*void)arg0 length:(NSUInteger)arg1 ;


@end


#endif