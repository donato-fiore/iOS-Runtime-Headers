// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIDOCUMENTCONTEXTDATA_H
#define VUIDOCUMENTCONTEXTDATA_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VUIDocumentContextData : NSObject

@property (copy, nonatomic) NSDictionary *contextDataDict; // ivar: _contextDataDict


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)jsonData;


@end


#endif