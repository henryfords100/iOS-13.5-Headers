/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VCPFaceGeometry : NSObject <NSSecureCoding> {

	* _vertices;
	unsigned long long _vertexCount;

}

@property (nonatomic,readonly) unsigned long long vertexCount;              //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,readonly) const * vertices; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const *)vertices;
-(unsigned long long)vertexCount;
-(id)initWithVertices:(const 1*)arg1 vertexCount:(unsigned long long)arg2 ;
@end

