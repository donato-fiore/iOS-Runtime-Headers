// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIIMAGEDATAMANAGEDOBJECT_H
#define VUIIMAGEDATAMANAGEDOBJECT_H

@class NSManagedObject, NSData;


#import "VUIImageInfoManagedObject.h"

@interface VUIImageDataManagedObject : NSManagedObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) VUIImageInfoManagedObject *imageInfo;


+(id)fetchRequest;


@end


#endif