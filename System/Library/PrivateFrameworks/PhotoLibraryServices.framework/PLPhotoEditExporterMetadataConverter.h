/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PICompositionExporterMetadataConverter.h>

@class NSString;

@interface PLPhotoEditExporterMetadataConverter : NSObject <PICompositionExporterMetadataConverter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)install;
-(id)videoMetadataForVariation:(id)arg1 error:(id*)arg2 ;
-(BOOL)setImageVariation:(id)arg1 properties:(id)arg2 error:(id*)arg3 ;
-(id)photoProcessingFlagsFromProperties:(id)arg1 error:(id*)arg2 ;
-(BOOL)setPhotoProcessingFlags:(id)arg1 properties:(id)arg2 error:(id*)arg3 ;
-(id)photoFeatureFlags:(id)arg1 error:(id*)arg2 ;
-(BOOL)setPhotoFeatureFlags:(id)arg1 properties:(id)arg2 error:(id*)arg3 ;
@end
