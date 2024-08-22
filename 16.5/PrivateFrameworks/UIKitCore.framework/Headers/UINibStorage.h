// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UINIBSTORAGE_H
#define UINIBSTORAGE_H

@class NSData, NSBundle, NSString, UINibDecoder;

#import <Foundation/Foundation.h>


@interface UINibStorage : NSObject

@property (copy, nonatomic) NSData *archiveData; // ivar: archiveData
@property (retain, nonatomic) NSBundle *bundle; // ivar: bundle
@property (copy, nonatomic) NSString *bundleDirectoryName; // ivar: bundleDirectoryName
@property (copy, nonatomic) NSString *bundleResourceName; // ivar: bundleResourceName
@property BOOL captureImplicitLoadingContextOnDecode; // ivar: captureImplicitLoadingContextOnDecode
@property (copy, nonatomic) NSString *identifierForStringsFile; // ivar: identifierForStringsFile
@property (nonatomic) BOOL instantiatingForSimulator; // ivar: instantiatingForSimulator
@property (retain, nonatomic) UINibDecoder *nibDecoder; // ivar: nibDecoder




@end


#endif