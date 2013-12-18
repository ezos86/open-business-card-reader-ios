/*
	FCAddress.h

	Created by Duane Schleen on 12/17/13.
	Copyright (c) 2013 FullContact Inc.

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	you may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
 */

#import <Foundation/Foundation.h>

@interface FCAddress : NSObject <NSCoding>

@property(nonatomic) NSString *country;
@property(nonatomic) NSString *locality;
@property(nonatomic) NSString *postalCode;
@property(nonatomic) NSString *region;
@property(nonatomic) NSString *streetAddress;
@property(nonatomic) NSString *type;

+ (FCAddress *)instanceFromDictionary:(NSDictionary *)aDictionary;

- (void)setAttributesFromDictionary:(NSDictionary *)aDictionary;

- (NSDictionary *)dictionaryRepresentation;

@end
