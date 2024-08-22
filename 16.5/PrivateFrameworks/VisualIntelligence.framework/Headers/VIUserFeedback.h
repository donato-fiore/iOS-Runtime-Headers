// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIUSERFEEDBACK_H
#define VIUSERFEEDBACK_H

@class NSString, NSData;
@protocol NSCopying, VIImageContent;

#import <Foundation/Foundation.h>


@interface VIUserFeedback : NSObject <NSCopying>



@property (readonly, nonatomic) NSObject<VIImageContent> *image; // ivar: _image
@property (readonly, copy, nonatomic) NSString *reportIdentifier; // ivar: _reportIdentifier
@property (readonly, copy, nonatomic) NSData *sfReportData; // ivar: _sfReportData
@property (readonly, copy, nonatomic) NSData *userFeedbackPayload; // ivar: _userFeedbackPayload


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithImage:(id)arg0 payload:(id)arg1 reportIdentifier:(id)arg2 ;
-(id)initWithImage:(id)arg0 userFeedbackPayload:(id)arg1 sfReportData:(id)arg2 reportIdentifier:(id)arg3 ;


@end


#endif