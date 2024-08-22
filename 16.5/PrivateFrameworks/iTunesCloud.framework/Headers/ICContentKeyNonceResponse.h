// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCONTENTKEYNONCERESPONSE_H
#define ICCONTENTKEYNONCERESPONSE_H

@class NSData;

#import <Foundation/Foundation.h>


@interface ICContentKeyNonceResponse : NSObject

@property (readonly, copy, nonatomic) NSData *nonceData; // ivar: _nonceData
@property (readonly, nonatomic) NSInteger status; // ivar: _status


-(id)initWithResponseDictionary:(id)arg0 ;


@end


#endif