// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUISIDEBANDMEDIAENTITYIMAGELOADPARAMS_H
#define VUISIDEBANDMEDIAENTITYIMAGELOADPARAMS_H

@class NSString;
@protocol VUIImageLoadParams;

#import <Foundation/Foundation.h>

#import "VUIImageInfoManagedObject.h"

@interface VUISidebandMediaEntityImageLoadParams : NSObject <VUIImageLoadParams>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *imageIdentifier;
@property (retain, nonatomic) NSString *imageIdentifierInternal; // ivar: _imageIdentifierInternal
@property (retain, nonatomic) VUIImageInfoManagedObject *imageInfo; // ivar: _imageInfo
@property (readonly, nonatomic) NSUInteger imageType;
@property (nonatomic) NSUInteger imageTypeInternal; // ivar: _imageTypeInternal
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithVideoManagedObject:(id)arg0 imageType:(NSUInteger)arg1 ;


@end


#endif