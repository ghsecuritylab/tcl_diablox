/*
 * Copyright (C) 2008 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
#ifndef __HWMSEN_CUSTOM_H__ 
#define __HWMSEN_CUSTOM_H__

#ifdef CUSTOM_KERNEL_ACCELEROMETER
	#define ACCELEROMETER 		"KXTJ2_1009 3-axis Accelerometer"
	#define ACCELEROMETER_VENDER 	"Kionix"
#endif

#ifdef CUSTOM_KERNEL_ALSPS
	#define PROXIMITY 		"stk3310  Proximity Sensor"
	#define PROXIMITY_VENDER 	"Sensortek"
	#define LIGHT 			"stk3310 Light Sensor"
	#define LIGHT_VENDER 		"Sensortek"
#endif

#ifdef CUSTOM_KERNEL_MAGNETOMETER
	#define MAGNETOMETER 		"yamaha533 Magnetic Field sensor"
	#define MAGNETOMETER_VENDER 	"YAMAHA"
	#define ORIENTATION 		"yamaha533 Orientation sensor"
	#define ORIENTATION_VENDER 	"YAMAHA"
#endif

#ifdef CUSTOM_KERNEL_GYROSCOPE
	#define GYROSCOPE 		"MPU3050c gyroscope Sensor"
	#define GYROSCOPE_VENDER 	"Invensensor"
#endif

#ifdef CUSTOM_KERNEL_BAROMETER
	#define PRESSURE 		"BMA050"
	#define PRESSURE_VENDER		"BMA050"
#endif

#ifdef CUSTOM_KERNEL_TEMPURATURE
	#define TEMPURATURE 		"BMA050"
	#define TEMPURATURE_VENDER	"BMA050"
#endif

#endif

